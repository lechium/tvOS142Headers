/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class INIntent, INIntentResponse, NSSet;

@interface INCExtensionTransactionState : NSObject {

	long long _type;
	INIntent* _intent;
	INIntentResponse* _intentResponse;
	NSSet* _userActivities;

}

@property (nonatomic,readonly) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) INIntent * intent;                              //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) INIntentResponse * intentResponse;              //@synthesize intentResponse=_intentResponse - In the implementation block
@property (nonatomic,copy,readonly) NSSet * userActivities;                    //@synthesize userActivities=_userActivities - In the implementation block
-(id)description;
-(long long)type;
-(INIntent *)intent;
-(INIntentResponse *)intentResponse;
-(id)initWithType:(long long)arg1 intent:(id)arg2 intentResponse:(id)arg3 userActivities:(id)arg4 ;
-(NSSet *)userActivities;
@end

