/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEOTransitLabelItem.h>

@protocol GEOTransitArtworkDataSource;
@class NSString;

@interface _GEOMapItemTransitInfoSnippetLabelItem : NSObject <GEOTransitLabelItem> {

	unsigned long long _type;
	NSString* _labelString;
	id<GEOTransitArtworkDataSource> _labelArtwork;

}

@property (nonatomic,readonly) unsigned long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * labelString;                                    //@synthesize labelString=_labelString - In the implementation block
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> labelArtwork;              //@synthesize labelArtwork=_labelArtwork - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)type;
-(id<GEOTransitArtworkDataSource>)labelArtwork;
-(NSString *)labelString;
-(id)initWithType:(unsigned long long)arg1 labelString:(id)arg2 labelArtwork:(id)arg3 ;
@end

