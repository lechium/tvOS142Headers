/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Espresso/Espresso-Structs.h>
@class EspressoFDOverfeatNetwork;

@interface EspressoDCNEspressoOverfeatDetector : NSObject {

	int tileSizeScaleFactor;
	int tileDimension;
	int localFaceMerging;
	FaceList* face_list;
	EspressoFDOverfeatNetwork* _enet;
	double _confidenceThreshold;
	double _minBoundingBoxThreshold;

}

@property (nonatomic,retain) EspressoFDOverfeatNetwork * enet;              //@synthesize enet=_enet - In the implementation block
@property (assign,nonatomic) double confidenceThreshold;                    //@synthesize confidenceThreshold=_confidenceThreshold - In the implementation block
@property (assign,nonatomic) double minBoundingBoxThreshold;                //@synthesize minBoundingBoxThreshold=_minBoundingBoxThreshold - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(id)getDescription;
-(void)commonInit;
-(id)initWithNetwork:(id)arg1 ;
-(void)fillFaceList;
-(id)getFacesFromNetworkResultOriginalWidth:(float)arg1 originalHeight:(float)arg2 ;
-(void)computeBBoxUsingProb:(shared_ptr<Espresso::blob<float, 3> >*)arg1 box:(shared_ptr<Espresso::blob<float, 3> >*)arg2 andScalefactor:(float)arg3 padX:(float)arg4 padY:(float)arg5 ;
-(void)mergeFaceList;
-(double)compareObject:(id)arg1 withObject:(id)arg2 error:(id*)arg3 ;
-(EspressoFDOverfeatNetwork *)enet;
-(void)setEnet:(EspressoFDOverfeatNetwork *)arg1 ;
-(double)confidenceThreshold;
-(void)setConfidenceThreshold:(double)arg1 ;
-(double)minBoundingBoxThreshold;
-(void)setMinBoundingBoxThreshold:(double)arg1 ;
@end

