/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDataNetworkEntry.h>

@class NSString;

@interface _UIStatusBarDataCellularEntry : _UIStatusBarDataNetworkEntry {

	BOOL _wifiCallingEnabled;
	BOOL _callForwardingEnabled;
	BOOL _showsSOSWhenDisabled;
	long long _type;
	NSString* _string;
	NSString* _crossfadeString;
	NSString* _badgeString;

}

@property (assign,nonatomic) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * string;                         //@synthesize string=_string - In the implementation block
@property (nonatomic,copy) NSString * crossfadeString;                //@synthesize crossfadeString=_crossfadeString - In the implementation block
@property (nonatomic,copy) NSString * badgeString;                    //@synthesize badgeString=_badgeString - In the implementation block
@property (assign,nonatomic) BOOL wifiCallingEnabled;                 //@synthesize wifiCallingEnabled=_wifiCallingEnabled - In the implementation block
@property (assign,nonatomic) BOOL callForwardingEnabled;              //@synthesize callForwardingEnabled=_callForwardingEnabled - In the implementation block
@property (assign,nonatomic) BOOL showsSOSWhenDisabled;               //@synthesize showsSOSWhenDisabled=_showsSOSWhenDisabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)string;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(long long)type;
-(NSString *)badgeString;
-(void)setBadgeString:(NSString *)arg1 ;
-(NSString *)crossfadeString;
-(BOOL)showsSOSWhenDisabled;
-(BOOL)callForwardingEnabled;
-(BOOL)wifiCallingEnabled;
-(id)_ui_descriptionBuilder;
-(void)setCrossfadeString:(NSString *)arg1 ;
-(void)setWifiCallingEnabled:(BOOL)arg1 ;
-(void)setCallForwardingEnabled:(BOOL)arg1 ;
-(void)setShowsSOSWhenDisabled:(BOOL)arg1 ;
@end

