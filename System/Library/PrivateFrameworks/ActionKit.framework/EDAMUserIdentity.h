/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMUserIdentity : FATObject {

	NSNumber* _type;
	NSString* _stringIdentifier;
	NSNumber* _longIdentifier;

}

@property (nonatomic,retain) NSNumber * type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * stringIdentifier;              //@synthesize stringIdentifier=_stringIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * longIdentifier;                //@synthesize longIdentifier=_longIdentifier - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setType:(NSNumber *)arg1 ;
-(NSNumber *)type;
-(NSString *)stringIdentifier;
-(void)setStringIdentifier:(NSString *)arg1 ;
-(NSNumber *)longIdentifier;
-(void)setLongIdentifier:(NSNumber *)arg1 ;
@end

