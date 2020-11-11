/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVInfoPanelMediaOptionCollectionViewController.h>

@class NSString;

@interface AVInfoPanelAudioCollectionViewController : AVInfoPanelMediaOptionCollectionViewController {

	NSString* _sectionTitle;

}

@property (nonatomic,readonly) double widthOfWidestCell; 
@property (nonatomic,retain) NSString * sectionTitle;                 //@synthesize sectionTitle=_sectionTitle - In the implementation block
-(NSString *)sectionTitle;
-(void)setSectionTitle:(NSString *)arg1 ;
-(void)viewDidLoad;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(double)widthOfWidestCell;
@end

