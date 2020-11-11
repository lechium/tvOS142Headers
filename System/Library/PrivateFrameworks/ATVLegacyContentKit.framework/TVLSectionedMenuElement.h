/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, TVLInitialSelectionElement;


@protocol TVLSectionedMenuElement <NSObject>
@property (nonatomic,retain) NSArray * sections; 
@property (nonatomic,retain) TVLInitialSelectionElement * initialSelection; 
@required
-(NSArray *)sections;
-(void)setSections:(id)arg1;
-(TVLInitialSelectionElement *)initialSelection;
-(void)setInitialSelection:(id)arg1;

@end

