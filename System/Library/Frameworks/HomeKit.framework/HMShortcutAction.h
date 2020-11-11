/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HMAction.h>

@class WFHomeWorkflow;

@interface HMShortcutAction : HMAction {

	WFHomeWorkflow* _shortcut;

}

@property (readonly) WFHomeWorkflow * shortcut;              //@synthesize shortcut=_shortcut - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isSupportedForHome:(id)arg1 ;
+(id)_actionWithInfo:(id)arg1 home:(id)arg2 ;
-(BOOL)isValid;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(WFHomeWorkflow *)shortcut;
-(id)initWithShortcut:(id)arg1 ;
-(id)_serializeForAdd;
-(BOOL)requiresDeviceUnlock;
@end

