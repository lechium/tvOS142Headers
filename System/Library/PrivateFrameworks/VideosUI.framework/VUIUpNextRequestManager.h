/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface VUIUpNextRequestManager : NSObject {

	NSMutableDictionary* _ongoingCanonicalIDOperationDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * ongoingCanonicalIDOperationDictionary;              //@synthesize ongoingCanonicalIDOperationDictionary=_ongoingCanonicalIDOperationDictionary - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(void)sendRequestForCanonicalID:(id)arg1 action:(unsigned long long)arg2 confirmationShouldWaitCompletion:(BOOL)arg3 ;
-(void)_displayConfirmationForAction:(unsigned long long)arg1 ;
-(NSMutableDictionary *)ongoingCanonicalIDOperationDictionary;
-(void)setOngoingCanonicalIDOperationDictionary:(NSMutableDictionary *)arg1 ;
@end

