/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WebKit/WebKit-Structs.h>
@interface WKWebViewContentProviderRegistry : NSObject {

	HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<Class<WKWebViewContentProvider> > >* _contentProviderForMIMEType;
	HashCountedSet<WebKit::WebPageProxy *, WTF::DefaultHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *> >* _pages;

}
-(id)initWithConfiguration:(id)arg1 ;
-(void)addPage:(WebPageProxy*)arg1 ;
-(void)removePage:(WebPageProxy*)arg1 ;
-(Class)providerForMIMEType:(const String*)arg1 ;
-(void)registerProvider:(Class)arg1 forMIMEType:(const String*)arg2 ;
-(Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)_mimeTypesWithCustomContentProviders;
@end
