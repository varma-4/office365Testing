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

@class MSOutlookEventFetcher;
@class MSOutlookEventCollectionFetcher;
@class MSOutlookCalendarOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSOutlookModels.h"

/**
* The header for type MSOutlookCalendarFetcher.
*/

@protocol MSOutlookCalendarFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSOutlookCalendar *calendar, MSODataException *exception))callback;
- (id<MSOutlookCalendarFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSOutlookCalendarFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSOutlookCalendarFetcher>)select:(NSString *)params;
- (id<MSOutlookCalendarFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSOutlookCalendarOperations *operations;

- (MSOutlookEventCollectionFetcher *)getCalendarView;
- (MSOutlookEventFetcher *) getCalendarViewById:(NSString*)_id;
- (MSOutlookEventCollectionFetcher *)getEvents;
- (MSOutlookEventFetcher *) getEventsById:(NSString*)_id;

@end

@interface MSOutlookCalendarFetcher : MSODataEntityFetcher<MSOutlookCalendarFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateCalendar:(MSOutlookCalendar *)calendar callback:(void (^)(MSOutlookCalendar *calendar, MSODataException *error))callback;
- (NSURLSessionTask *) deleteCalendar:(void (^)(int status, MSODataException *exception))callback;

@end