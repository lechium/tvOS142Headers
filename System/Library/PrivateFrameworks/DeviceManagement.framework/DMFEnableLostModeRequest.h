/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFEnableLostModeRequest : DMFTaskRequest {

	NSString* _message;
	NSString* _phoneNumber;
	NSString* _footnote;

}

@property (nonatomic,copy) NSString * message;                  //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * footnote;                 //@synthesize footnote=_footnote - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)phoneNumber;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setFootnote:(NSString *)arg1 ;
-(NSString *)footnote;
@end

