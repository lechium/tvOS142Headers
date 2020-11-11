/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFSpeechRecordingAlertBehaviorMutating.h>

@class AFSpeechRecordingAlertBehavior, NSString;

@interface _AFSpeechRecordingAlertBehaviorMutation : NSObject <AFSpeechRecordingAlertBehaviorMutating> {

	AFSpeechRecordingAlertBehavior* _baseModel;
	long long _style;
	long long _beepSoundID;
	struct {
		unsigned isDirty : 1;
		unsigned hasStyle : 1;
		unsigned hasBeepSoundID : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setStyle:(long long)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setBeepSoundID:(long long)arg1 ;
@end

