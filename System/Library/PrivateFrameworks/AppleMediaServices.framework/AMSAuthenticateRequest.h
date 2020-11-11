/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ACAccount, NSString, AMSAuthenticateOptions, NSDictionary;

@interface AMSAuthenticateRequest : NSObject <NSSecureCoding> {

	ACAccount* _account;
	NSString* _logKey;
	AMSAuthenticateOptions* _options;
	NSDictionary* _userInfo;

}

@property (nonatomic,retain) ACAccount * account;                           //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * logKey;                             //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,retain) AMSAuthenticateOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                       //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(AMSAuthenticateOptions *)options;
-(void)setOptions:(AMSAuthenticateOptions *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(id)initWithAccount:(id)arg1 options:(id)arg2 ;
-(id)initWithDSID:(id)arg1 altDSID:(id)arg2 username:(id)arg3 options:(id)arg4 ;
@end

