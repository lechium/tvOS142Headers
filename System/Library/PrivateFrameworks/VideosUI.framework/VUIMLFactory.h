/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VUIMLFactory : NSObject
+(id)sharedInstance;
+(id)_urlForStyleSheetName:(id)arg1 ;
+(void)_registerElements;
+(void)_registerStyles;
+(void)_registerStylesheets;
-(id)init;
-(id)URLForResource:(id)arg1 ;
-(id)_styleSheetURLForTemplate:(id)arg1 ;
-(id)imageForResource:(id)arg1 ;
-(id)viewForElement:(id)arg1 existingView:(id)arg2 ;
-(id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2 ;
-(Class)collectionViewCellClassForElement:(id)arg1 ;
-(id)_URLForResource:(id)arg1 inBundle:(id)arg2 ;
-(id)imageProxyForElement:(id)arg1 withLayout:(id)arg2 ;
-(void)parseAppConfigurationForElement:(id)arg1 ;
-(id)styleSheetURLForTemplate:(id)arg1 ;
-(id)navigationControllerForTabIdentifier:(id)arg1 ;
@end
