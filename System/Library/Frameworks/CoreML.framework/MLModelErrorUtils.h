/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MLModelErrorUtils : NSObject
+(id)errorWithCode:(long long)arg1 format:(id)arg2 ;
+(id)errorWithIntegerCode:(long long)arg1 underlyingError:(id)arg2 format:(id)arg3 args:(char*)arg4 ;
+(id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 format:(id)arg3 args:(char*)arg4 ;
+(id)errorWithCode:(long long)arg1 format:(id)arg2 args:(char*)arg3 ;
+(id)privateErrorWithCode:(long long)arg1 underlyingError:(id)arg2 format:(id)arg3 args:(char*)arg4 ;
+(id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 format:(id)arg3 ;
+(id)genericErrorWithFormat:(id)arg1 ;
+(id)updateErrorWithFormat:(id)arg1 ;
+(id)featureTypeErrorWithFormat:(id)arg1 ;
+(id)IOErrorWithFormat:(id)arg1 ;
+(id)customLayerErrorWithUnderlyingError:(id)arg1 withFormat:(id)arg2 ;
+(id)parameterErrorWithUnderlyingError:(id)arg1 format:(id)arg2 ;
+(id)modelEncryptionErrorWithUnderlyingError:(id)arg1 format:(id)arg2 ;
+(id)modelDecryptionKeyFetchErrorWithUnderlyingError:(id)arg1 format:(id)arg2 ;
+(id)modelDecryptionErrorWithUnderlyingError:(id)arg1 format:(id)arg2 ;
@end

