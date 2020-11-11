/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISScalableCompositorResource.h>

@class NSString, NSURL, NSDictionary;

@interface ISBundle : NSObject <ISScalableCompositorResource> {

	CFBundleRef _bundle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) CFBundleRef bundle;                                //@synthesize bundle=_bundle - In the implementation block
@property (copy,readonly) NSURL * bundleURL; 
@property (copy,readonly) NSURL * assetCatalogURL; 
@property (copy,readonly) NSDictionary * iconDictionary; 
+(id)mainBundle;
+(id)frameworkBundle;
+(id)iconsetResourceBundle;
+(id)iconsetResourceAssetsCatalogURL;
+(id)frameworkLocalizedString:(id)arg1 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 ;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 ;
-(NSURL *)bundleURL;
-(id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 ;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(CFBundleRef)bundle;
-(void)setBundle:(CFBundleRef)arg1 ;
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(NSDictionary *)iconDictionary;
-(NSURL *)assetCatalogURL;
-(id)compositorResource;
-(id)initWithCFBundle:(CFBundleRef)arg1 ;
@end

