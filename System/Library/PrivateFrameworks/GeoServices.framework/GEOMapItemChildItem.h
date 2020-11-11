/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOMapItemChildPlace, GEOMapItemChildAction, GEOPublisherResult;

@interface GEOMapItemChildItem : NSObject {

	long long _childItemType;
	GEOMapItemChildPlace* _childItemPlace;
	GEOMapItemChildAction* _childItemAction;
	GEOPublisherResult* _publisherResult;

}

@property (assign,nonatomic) long long childItemType;                              //@synthesize childItemType=_childItemType - In the implementation block
@property (nonatomic,retain) GEOMapItemChildPlace * childItemPlace;                //@synthesize childItemPlace=_childItemPlace - In the implementation block
@property (nonatomic,retain) GEOMapItemChildAction * childItemAction;              //@synthesize childItemAction=_childItemAction - In the implementation block
@property (nonatomic,readonly) GEOPublisherResult * publisherResult;               //@synthesize publisherResult=_publisherResult - In the implementation block
-(id)initWithPublisherResult:(id)arg1 ;
-(GEOPublisherResult *)publisherResult;
-(void)setChildItemType:(long long)arg1 ;
-(long long)childItemType;
-(id)initWithChildItem:(id)arg1 ;
-(id)initWithChildPlace:(id)arg1 ;
-(GEOMapItemChildPlace *)childItemPlace;
-(void)setChildItemPlace:(GEOMapItemChildPlace *)arg1 ;
-(GEOMapItemChildAction *)childItemAction;
-(void)setChildItemAction:(GEOMapItemChildAction *)arg1 ;
@end

