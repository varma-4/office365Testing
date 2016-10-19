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

#import "MSOutlookModels.h"

/**
* The implementation file for type MSOutlookFolder.
*/

@implementation MSOutlookFolder	

@synthesize odataType = _odataType;
@synthesize ParentFolderId = _ParentFolderId;
@synthesize DisplayName = _DisplayName;
@synthesize ChildFolderCount = _ChildFolderCount;
@synthesize ChildFolders = _ChildFolders;
@synthesize Messages = _Messages;

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.OutlookServices.Folder";
    }

	return self;
}

@end