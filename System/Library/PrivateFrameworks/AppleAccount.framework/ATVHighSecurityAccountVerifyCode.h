/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleAccount/ATVHighSecurityAccountSendCode.h>

@class NSString;

@interface ATVHighSecurityAccountVerifyCode : ATVHighSecurityAccountSendCode {

	NSString* _hsaCode;

}
+(Class)responseClass;
-(id)urlString;
-(id)urlRequest;
-(id)initWithAccount:(id)arg1 device:(id)arg2 hsaCode:(id)arg3 ;
@end
