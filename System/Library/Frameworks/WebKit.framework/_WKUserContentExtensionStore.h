/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKContentRuleListStore, NSString;

@interface _WKUserContentExtensionStore : NSObject <WKObject> {

	RetainPtr<WKContentRuleListStore>* _contentRuleListStore;

}

@property (nonatomic,readonly) WKContentRuleListStore * _contentRuleListStore; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultStore;
+(id)storeWithURL:(id)arg1 ;
-(Object*)_apiObject;
-(WKContentRuleListStore *)_contentRuleListStore;
-(id)_initWithWKContentRuleListStore:(id)arg1 ;
-(void)compileContentExtensionForIdentifier:(id)arg1 encodedContentExtension:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)lookupContentExtensionForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeContentExtensionForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removeAllContentExtensions;
-(void)_invalidateContentExtensionVersionForIdentifier:(id)arg1 ;
@end

