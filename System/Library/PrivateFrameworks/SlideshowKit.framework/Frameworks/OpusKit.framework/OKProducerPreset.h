/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary, NSArray;

@interface OKProducerPreset : NSObject {

	NSString* _family;
	NSString* _name;
	NSDictionary* _presetDictionary;
	NSString* _localizedName;
	NSArray* _guidelines;
	NSArray* _audioURLs;

}
-(id)init;
-(void)dealloc;
-(id)uniqueIdentifier;
-(id)localizedName;
-(BOOL)isDefault;
-(id)pluginIdentifier;
-(BOOL)isLocal;
-(id)backgroundColor;
-(BOOL)isAvailable;
-(id)family;
-(id)initWithFamily:(id)arg1 name:(id)arg2 andDictionary:(id)arg3 ;
-(id)initWithFamily:(id)arg1 andPluginIdentifier:(id)arg2 ;
-(id)_settingKeyForType:(unsigned long long)arg1 ;
-(id)guidelines;
-(id)audioURLs;
-(BOOL)supportsSettingType:(unsigned long long)arg1 ;
@end

