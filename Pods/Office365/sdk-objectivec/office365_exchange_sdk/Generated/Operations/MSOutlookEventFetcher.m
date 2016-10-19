/*******************************************************************************
Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the MIT or Apache License; see LICENSE in the source repository
root for authoritative license information.﻿

**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).
******************************************************************************/

#import "MSOutlookODataEntities.h"

@implementation MSOutlookEventFetcher

@synthesize operations = _operations;

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {

    if (self = [super initWithUrl:urlComponent parent:parent asClass:[MSOutlookEvent class]]) {

		_operations = [[MSOutlookEventOperations alloc] initOperationWithUrl:urlComponent parent:parent];
    }

    return self;
}

- (NSURLSessionTask *)updateEvent:(id)entity callback:(void (^)(MSOutlookEvent *event, MSODataException *exception))callback {

	return [super updateEntity:entity callback:callback];
}

- (NSURLSessionTask *)deleteEvent:(void (^)(int status, MSODataException *exception))callback {

	return [super deleteWithCallback:callback];
}

- (MSOutlookAttachmentCollectionFetcher *)getAttachments {

    return [[MSOutlookAttachmentCollectionFetcher alloc] initWithUrl:@"Attachments" parent:self asClass:[MSOutlookAttachment class]];
}

- (id<MSOutlookAttachmentFetcher>)getAttachmentsById:(NSString *)_id {

    return [[[MSOutlookAttachmentCollectionFetcher alloc] initWithUrl:@"Attachments" parent:self asClass:[MSOutlookAttachment class]] getById:_id];
}

- (MSOutlookCalendarFetcher *) getCalendar {

	 return [[MSOutlookCalendarFetcher alloc] initWithUrl:@"Calendar" parent:self asClass:[MSOutlookCalendar class]];
}

- (MSOutlookEventCollectionFetcher *)getInstances {

    return [[MSOutlookEventCollectionFetcher alloc] initWithUrl:@"Instances" parent:self asClass:[MSOutlookEvent class]];
}

- (id<MSOutlookEventFetcher>)getInstancesById:(NSString *)_id {

    return [[[MSOutlookEventCollectionFetcher alloc] initWithUrl:@"Instances" parent:self asClass:[MSOutlookEvent class]] getById:_id];
}

@end