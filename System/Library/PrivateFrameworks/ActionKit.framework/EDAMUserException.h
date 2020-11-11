/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATException.h>

@class NSNumber, NSString;

@interface EDAMUserException : FATException {

	NSNumber* _errorCode;
	NSString* _parameter;

}

@property (nonatomic,retain) NSNumber * errorCode;              //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,retain) NSString * parameter;              //@synthesize parameter=_parameter - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setErrorCode:(NSNumber *)arg1 ;
-(NSNumber *)errorCode;
-(NSString *)parameter;
-(void)setParameter:(NSString *)arg1 ;
@end
