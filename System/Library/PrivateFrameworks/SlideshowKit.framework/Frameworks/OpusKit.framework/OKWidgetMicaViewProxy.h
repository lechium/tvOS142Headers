/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/OKCollectionProxyDataSource.h>
#import <libobjc.A.dylib/OKWidgetMicaViewProxyExports.h>

@class NSString, NSDictionary, OKWidgetMicaDocument;

@interface OKWidgetMicaViewProxy : OKWidgetView <OKCollectionProxyDataSource, OKWidgetMicaViewProxyExports> {

	NSString* _resourceName;
	NSDictionary* _options;
	OKWidgetMicaDocument* _micaDocument;
	BOOL _scaleToFit;
	BOOL _autoplay;
	double _duration;
	double _seekToTime;

}

@property (nonatomic,copy) NSString * resourceName;                            //@synthesize resourceName=_resourceName - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                             //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) OKWidgetMicaDocument * micaDocument;              //@synthesize micaDocument=_micaDocument - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(void)resume;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)pause;
-(id)valueForUndefinedKey:(id)arg1 ;
-(BOOL)isPlaying;
-(NSString *)resourceName;
-(void)setResourceName:(NSString *)arg1 ;
-(void)restart;
-(void)layoutSubviews;
-(id)initWithWidget:(id)arg1 ;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(BOOL)settingAutoplay;
-(void)setSettingAutoplay:(BOOL)arg1 ;
-(double)settingDuration;
-(void)setSettingDuration:(double)arg1 ;
-(BOOL)prepareForWarmup:(BOOL)arg1 ;
-(BOOL)prepareForUnload:(BOOL)arg1 ;
-(void)prepareForRefresh;
-(unsigned long long)countOfDictionaryProxy:(id)arg1 ;
-(id)allKeysForDictionaryProxy:(id)arg1 ;
-(id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2 ;
-(id)settingOptions;
-(void)setSettingOptions:(id)arg1 ;
-(BOOL)settingScaleToFit;
-(void)setSettingScaleToFit:(BOOL)arg1 ;
-(double)settingSeekToTime;
-(void)setSettingSeekToTime:(double)arg1 ;
-(void)unloadMicaDocument;
-(void)updateMicaDocumentLayer;
-(void)setMicaDocument:(OKWidgetMicaDocument *)arg1 ;
-(void)loadMicaDocumentIfNeeded;
-(id)settingResource;
-(void)setSettingResource:(id)arg1 ;
-(OKWidgetMicaDocument *)micaDocument;
@end

