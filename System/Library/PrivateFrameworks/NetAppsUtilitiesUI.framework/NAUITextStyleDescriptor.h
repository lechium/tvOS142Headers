/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetAppsUtilitiesUI/NetAppsUtilitiesUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NAUITextStyleDescriptor : NSObject <NSCopying> {

	BOOL _allowsAccessibilitySizes;
	BOOL _allowsSmallSizes;
	unsigned _symbolicTraits;
	NSString* _textStyle;

}

@property (nonatomic,copy,readonly) NSString * textStyle;                  //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,readonly) unsigned symbolicTraits;                    //@synthesize symbolicTraits=_symbolicTraits - In the implementation block
@property (nonatomic,readonly) BOOL allowsAccessibilitySizes;              //@synthesize allowsAccessibilitySizes=_allowsAccessibilitySizes - In the implementation block
@property (nonatomic,readonly) BOOL allowsSmallSizes;                      //@synthesize allowsSmallSizes=_allowsSmallSizes - In the implementation block
+(id)na_identity;
+(id)descriptorWithTextStyle:(id)arg1 ;
+(id)fontWithTextStyleDescriptor:(id)arg1 ;
+(id)defaultFontForTextStyleDescriptor:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned)symbolicTraits;
-(NSString *)textStyle;
-(id)initWithTextStyle:(id)arg1 symbolicTraits:(unsigned)arg2 allowsAccessibilitySizes:(BOOL)arg3 allowsSmallSizes:(BOOL)arg4 ;
-(BOOL)allowsAccessibilitySizes;
-(BOOL)allowsSmallSizes;
-(id)descriptorByAddingSymbolicTraits:(unsigned)arg1 removingSymbolicTraits:(unsigned)arg2 ;
-(id)descriptorByDisallowingAccessibilitySizes;
-(id)descriptorByDisallowingSmallSizes;
@end

