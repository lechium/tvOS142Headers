/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AMSUIWebClientContext, NSDictionary, NSMutableDictionary, NSArray;

@interface AMSUIWebPluginLoader : NSObject {

	AMSUIWebClientContext* _context;
	NSDictionary* _installedPluginURLs;
	NSMutableDictionary* _loadedPluginsMap;

}

@property (nonatomic,readonly) AMSUIWebClientContext * context;                   //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSDictionary * installedPluginURLs;                //@synthesize installedPluginURLs=_installedPluginURLs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * loadedPluginsMap;              //@synthesize loadedPluginsMap=_loadedPluginsMap - In the implementation block
@property (nonatomic,readonly) NSArray * loadedPlugins; 
-(AMSUIWebClientContext *)context;
-(id)initWithContext:(id)arg1 ;
-(NSArray *)loadedPlugins;
-(id)pluginForBundleIdentifier:(id)arg1 ;
-(id)_loadInstalledPlugins;
-(NSMutableDictionary *)loadedPluginsMap;
-(NSDictionary *)installedPluginURLs;
-(void)setLoadedPluginsMap:(NSMutableDictionary *)arg1 ;
@end

