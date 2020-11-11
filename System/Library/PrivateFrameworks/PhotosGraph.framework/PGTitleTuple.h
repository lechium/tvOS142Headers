/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PGTitle, NSArray;

@interface PGTitleTuple : NSObject {

	PGTitle* _title;
	PGTitle* _subtitle;
	NSArray* _locationNames;

}

@property (nonatomic,readonly) PGTitle * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) PGTitle * subtitle;                   //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSArray * locationNames;              //@synthesize locationNames=_locationNames - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(PGTitle *)title;
-(PGTitle *)subtitle;
-(NSArray *)locationNames;
-(id)initWithWithTitle:(id)arg1 subtitle:(id)arg2 locationNames:(id)arg3 ;
-(id)initWithWithTitle:(id)arg1 subtitle:(id)arg2 ;
@end
