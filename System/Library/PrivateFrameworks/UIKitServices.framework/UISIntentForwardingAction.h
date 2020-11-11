/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSAction.h>

@class INIntent, INIntentForwardingAction;

@interface UISIntentForwardingAction : BSAction {

	INIntent* _cachedIntent;
	INIntentForwardingAction* _cachedIntentForwardingAction;

}

@property (nonatomic,readonly) INIntent * intent; 
@property (nonatomic,readonly) INIntentForwardingAction * intentForwardingAction; 
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(INIntent *)intent;
-(INIntentForwardingAction *)intentForwardingAction;
-(id)initWithIntentForwardingAction:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(long long)UIActionType;
-(id)initWithIntent:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

