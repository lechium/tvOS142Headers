/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDataIntegerEntry.h>

@interface _UIStatusBarDataNetworkEntry : _UIStatusBarDataIntegerEntry {

	BOOL _lowDataModeActive;
	long long _status;

}

@property (assign,nonatomic) long long status;                    //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL lowDataModeActive;              //@synthesize lowDataModeActive=_lowDataModeActive - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(BOOL)lowDataModeActive;
-(id)_ui_descriptionBuilder;
-(void)setLowDataModeActive:(BOOL)arg1 ;
@end

