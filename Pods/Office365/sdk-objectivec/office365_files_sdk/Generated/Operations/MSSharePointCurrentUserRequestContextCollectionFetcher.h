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

@class MSSharePointCurrentUserRequestContextFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSSharePointModels.h"

/**
* The header for type MSSharePointCurrentUserRequestContextCollectionFetcher.
*/

@protocol MSSharePointCurrentUserRequestContextCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSSharePointCurrentUserRequestContext> *currentUserRequestContexts, MSODataException *exception))callback;

- (id<MSSharePointCurrentUserRequestContextCollectionFetcher>)select:(NSString *)params;
- (id<MSSharePointCurrentUserRequestContextCollectionFetcher>)filter:(NSString *)params;
- (id<MSSharePointCurrentUserRequestContextCollectionFetcher>)top:(int)value;
- (id<MSSharePointCurrentUserRequestContextCollectionFetcher>)skip:(int)value;
- (id<MSSharePointCurrentUserRequestContextCollectionFetcher>)expand:(NSString *)value;
- (id<MSSharePointCurrentUserRequestContextCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSSharePointCurrentUserRequestContextCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSSharePointCurrentUserRequestContextCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSSharePointCurrentUserRequestContextFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addCurrentUserRequestContext:(MSSharePointCurrentUserRequestContext *)entity callback:(void (^)(MSSharePointCurrentUserRequestContext *currentUserRequestContext, MSODataException *e))callback;

@end

@interface MSSharePointCurrentUserRequestContextCollectionFetcher : MSODataCollectionFetcher<MSSharePointCurrentUserRequestContextCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end