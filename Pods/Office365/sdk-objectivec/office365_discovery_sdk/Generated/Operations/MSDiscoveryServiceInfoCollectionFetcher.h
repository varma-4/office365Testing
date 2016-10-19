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

@class MSDiscoveryServiceInfoFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSDiscoveryModels.h"

/**
* The header for type MSDiscoveryServiceInfoCollectionFetcher.
*/

@protocol MSDiscoveryServiceInfoCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSDiscoveryServiceInfo> *serviceInfos, MSODataException *exception))callback;

- (id<MSDiscoveryServiceInfoCollectionFetcher>)select:(NSString *)params;
- (id<MSDiscoveryServiceInfoCollectionFetcher>)filter:(NSString *)params;
- (id<MSDiscoveryServiceInfoCollectionFetcher>)top:(int)value;
- (id<MSDiscoveryServiceInfoCollectionFetcher>)skip:(int)value;
- (id<MSDiscoveryServiceInfoCollectionFetcher>)expand:(NSString *)value;
- (id<MSDiscoveryServiceInfoCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSDiscoveryServiceInfoCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSDiscoveryServiceInfoCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSDiscoveryServiceInfoFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addServiceInfo:(MSDiscoveryServiceInfo *)entity callback:(void (^)(MSDiscoveryServiceInfo *serviceInfo, MSODataException *e))callback;

@end

@interface MSDiscoveryServiceInfoCollectionFetcher : MSODataCollectionFetcher<MSDiscoveryServiceInfoCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end