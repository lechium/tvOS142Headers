/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MKStackingViewController.h>

@class MKMapItem, NSMutableDictionary;

@interface MKLayoutCardViewController : MKStackingViewController {

	MKMapItem* _mapItem;
	NSMutableDictionary* _cacheVC;
	NSMutableDictionary* _cacheModuleType;

}

@property (nonatomic,retain) NSMutableDictionary * cacheVC;                      //@synthesize cacheVC=_cacheVC - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cacheModuleType;              //@synthesize cacheModuleType=_cacheModuleType - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                //@synthesize mapItem=_mapItem - In the implementation block
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(id)_layoutModuleForMapItem;
-(void)setCacheVC:(NSMutableDictionary *)arg1 ;
-(void)setCacheModuleType:(NSMutableDictionary *)arg1 ;
-(id)_createViewControllerForModule:(id)arg1 ;
-(NSMutableDictionary *)cacheVC;
-(NSMutableDictionary *)cacheModuleType;
-(BOOL)isTransitItem;
-(BOOL)isLayoutDynamic;
-(void)_createModuleLayout:(id)arg1 ;
-(id)_cachedViewControllerForModule:(int)arg1 ;
@end

