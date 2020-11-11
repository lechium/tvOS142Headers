/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AccessibilitySharedSupport/AccessibilitySharedSupport-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AXSSKeyboardCommand : NSObject <NSSecureCoding, NSCopying> {

	NSString* _type;
	NSString* _standardCommandIdentifier;

}

@property (nonatomic,readonly) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * standardCommandIdentifier;              //@synthesize standardCommandIdentifier=_standardCommandIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * localizedName; 
+(BOOL)supportsSecureCoding;
+(id)commandWithStandardCommandIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)type;
-(id)initWithType:(id)arg1 ;
-(NSString *)localizedName;
-(id)initWithStandardCommandIdentifier:(id)arg1 ;
-(id)_initWithType:(id)arg1 standardCommandIdentifier:(id)arg2 ;
-(NSString *)standardCommandIdentifier;
-(BOOL)isEqualToCommand:(id)arg1 ;
@end

