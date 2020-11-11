/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface MaintenanceActivity : NSObject {

	/*^block*/id _activityBlock;
	NSObject*<OS_dispatch_queue> _activityQueue;
	NSString* _activityIdentifier;

}

@property (nonatomic,copy) id activityBlock;                                          //@synthesize activityBlock=_activityBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> activityQueue;              //@synthesize activityQueue=_activityQueue - In the implementation block
@property (nonatomic,retain) NSString * activityIdentifier;                           //@synthesize activityIdentifier=_activityIdentifier - In the implementation block
-(NSObject*<OS_dispatch_queue>)activityQueue;
-(NSString *)activityIdentifier;
-(void)setActivityIdentifier:(NSString *)arg1 ;
-(void)setActivityQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)activityBlock;
-(void)setActivityBlock:(id)arg1 ;
@end
