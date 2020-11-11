/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SSRVoiceProfileMetadataManager : NSObject
+(BOOL)isUtteranceImplicitlyTrained:(id)arg1 ;
+(id)recordedTimeStampOfFile:(id)arg1 ;
+(id)_getBaseMetaDictionaryForUtterancePath:(id)arg1 ;
+(void)_writeMetaDict:(id)arg1 forUtterancePath:(id)arg2 ;
+(id)getUtteranceEnrollmentType:(id)arg1 ;
+(id)recordedTimeStampFromFileName:(id)arg1 ;
+(void)saveUtteranceMetadataForUtterance:(id)arg1 enrollmentType:(id)arg2 isHandheldEnrollment:(BOOL)arg3 triggerSource:(id)arg4 audioInput:(id)arg5 otherBiometricResult:(unsigned long long)arg6 containsPayload:(BOOL)arg7 ;
@end
