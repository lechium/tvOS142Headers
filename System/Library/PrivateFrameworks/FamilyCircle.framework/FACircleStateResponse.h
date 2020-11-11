/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, NSDictionary;

@interface FACircleStateResponse : NSObject <NSSecureCoding> {

	BOOL _loadSuccess;
	NSError* _error;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) BOOL success; 
@property (nonatomic,readonly) BOOL loadSuccess;                     //@synthesize loadSuccess=_loadSuccess - In the implementation block
@property (nonatomic,readonly) NSError * error;                      //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(BOOL)success;
-(BOOL)loadSuccess;
-(id)initWithLoadSuccess:(BOOL)arg1 error:(id)arg2 userInfo:(id)arg3 ;
@end

