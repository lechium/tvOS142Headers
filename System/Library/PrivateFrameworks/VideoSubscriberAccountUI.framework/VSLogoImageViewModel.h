/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSItemProvider, UIImage, NSString;


@protocol VSLogoImageViewModel <NSObject>
@property (nonatomic,retain) NSItemProvider * logoProvider; 
@property (nonatomic,retain) UIImage * logo; 
@property (nonatomic,copy) NSString * logoAccessibilityLabel; 
@required
-(UIImage *)logo;
-(void)setLogo:(id)arg1;
-(void)setLogoProvider:(id)arg1;
-(NSItemProvider *)logoProvider;
-(NSString *)logoAccessibilityLabel;
-(void)setLogoAccessibilityLabel:(id)arg1;

@end

