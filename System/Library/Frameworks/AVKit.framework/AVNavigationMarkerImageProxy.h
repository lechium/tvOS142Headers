/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVImageProxyProtocol.h>

@class UIImage, NSString;

@interface AVNavigationMarkerImageProxy : NSObject <AVImageProxyProtocol> {

	BOOL _failed;
	UIImage* _image;
	CGSize _proxySize;

}

@property (nonatomic,retain) UIImage * image;                       //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGSize proxySize;                      //@synthesize proxySize=_proxySize - In the implementation block
@property (assign,nonatomic) BOOL failed;                           //@synthesize failed=_failed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)failed;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setFailed:(BOOL)arg1 ;
-(CGSize)proxySize;
-(void)setProxySize:(CGSize)arg1 ;
@end

