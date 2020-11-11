//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MSDeleterDelegate-Protocol.h"

@class NSString;
@protocol MSDeleter, MSDeleterPlugin;

@protocol MSDeleterPlugin <MSDeleterDelegate>
+ (id <MSDeleterPlugin>)deleterPluginForPersonID:(NSString *)arg1;

@optional
- (void)deleterWillDeassignPluginAsDelegateOfDeleter:(id <MSDeleter>)arg1;
- (void)deleterWillAssignPluginAsDelegateOfDeleter:(id <MSDeleter>)arg1;
@end
