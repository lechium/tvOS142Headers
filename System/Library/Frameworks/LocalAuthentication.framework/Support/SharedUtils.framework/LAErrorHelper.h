/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface LAErrorHelper : NSObject
+(id)errorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)errorWithCode:(long long)arg1 ;
+(id)errorWithCode:(long long)arg1 message:(id)arg2 ;
+(id)internalErrorWithMessage:(id)arg1 ;
+(id)parameterErrorWithMessage:(id)arg1 ;
+(id)errorWithCode:(long long)arg1 message:(id)arg2 moreInfo:(id)arg3 ;
+(id)silentInternalErrorWithMessage:(id)arg1 ;
+(id)errorWithCode:(long long)arg1 message:(id)arg2 suberror:(id)arg3 ;
+(id)errorWithCode:(long long)arg1 subcode:(long long)arg2 message:(id)arg3 ;
+(id)parameterErrorForMissingOrInvalidObject:(id)arg1 name:(const char*)arg2 ;
+(id)missingEntitlementError:(id)arg1 ;
+(id)errorNotSupported;
+(void)raiseExceptionOnError:(id)arg1 ;
+(BOOL)error:(id)arg1 hasCode:(long long)arg2 ;
+(BOOL)error:(id)arg1 hasCode:(long long)arg2 subcode:(long long)arg3 ;
@end

