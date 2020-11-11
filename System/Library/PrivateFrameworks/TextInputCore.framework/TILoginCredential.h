/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TILoginCredential : NSObject <NSCopying> {

	NSString* _username;
	NSString* _password;
	NSString* _site;

}

@property (nonatomic,readonly) NSString * username;              //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) NSString * password;              //@synthesize password=_password - In the implementation block
@property (nonatomic,readonly) NSString * site;                  //@synthesize site=_site - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)password;
-(NSString *)username;
-(NSString *)site;
-(id)initWithUsername:(id)arg1 password:(id)arg2 site:(id)arg3 ;
@end

