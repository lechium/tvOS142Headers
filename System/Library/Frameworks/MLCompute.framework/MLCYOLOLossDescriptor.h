/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, MLCLossDescriptor;

@interface MLCYOLOLossDescriptor : NSObject <NSCopying> {

	BOOL _shouldRescore;
	float _scaleSpatialPositionLoss;
	float _scaleSpatialSizeLoss;
	float _scaleNoObjectConfidenceLoss;
	float _scaleObjectConfidenceLoss;
	float _scaleClassLoss;
	float _minimumIOUForObjectPresence;
	float _maximumIOUForObjectAbsence;
	int _reductionType;
	unsigned long long _anchorBoxCount;
	NSData* _anchorBoxes;
	MLCLossDescriptor* _spatialPositionLossDescriptor;
	MLCLossDescriptor* _spatialSizeLossDescriptor;
	MLCLossDescriptor* _confidenceLossDescriptor;
	MLCLossDescriptor* _classesLossDescriptor;

}

@property (retain,readonly) MLCLossDescriptor * spatialPositionLossDescriptor;              //@synthesize spatialPositionLossDescriptor=_spatialPositionLossDescriptor - In the implementation block
@property (retain,readonly) MLCLossDescriptor * spatialSizeLossDescriptor;                  //@synthesize spatialSizeLossDescriptor=_spatialSizeLossDescriptor - In the implementation block
@property (retain,readonly) MLCLossDescriptor * confidenceLossDescriptor;                   //@synthesize confidenceLossDescriptor=_confidenceLossDescriptor - In the implementation block
@property (retain,readonly) MLCLossDescriptor * classesLossDescriptor;                      //@synthesize classesLossDescriptor=_classesLossDescriptor - In the implementation block
@property (nonatomic,readonly) int reductionType;                                           //@synthesize reductionType=_reductionType - In the implementation block
@property (nonatomic,readonly) unsigned long long anchorBoxCount;                           //@synthesize anchorBoxCount=_anchorBoxCount - In the implementation block
@property (nonatomic,copy,readonly) NSData * anchorBoxes;                                   //@synthesize anchorBoxes=_anchorBoxes - In the implementation block
@property (assign,nonatomic) BOOL shouldRescore;                                            //@synthesize shouldRescore=_shouldRescore - In the implementation block
@property (assign,nonatomic) float scaleSpatialPositionLoss;                                //@synthesize scaleSpatialPositionLoss=_scaleSpatialPositionLoss - In the implementation block
@property (assign,nonatomic) float scaleSpatialSizeLoss;                                    //@synthesize scaleSpatialSizeLoss=_scaleSpatialSizeLoss - In the implementation block
@property (assign,nonatomic) float scaleNoObjectConfidenceLoss;                             //@synthesize scaleNoObjectConfidenceLoss=_scaleNoObjectConfidenceLoss - In the implementation block
@property (assign,nonatomic) float scaleObjectConfidenceLoss;                               //@synthesize scaleObjectConfidenceLoss=_scaleObjectConfidenceLoss - In the implementation block
@property (assign,nonatomic) float scaleClassLoss;                                          //@synthesize scaleClassLoss=_scaleClassLoss - In the implementation block
@property (assign,nonatomic) float minimumIOUForObjectPresence;                             //@synthesize minimumIOUForObjectPresence=_minimumIOUForObjectPresence - In the implementation block
@property (assign,nonatomic) float maximumIOUForObjectAbsence;                              //@synthesize maximumIOUForObjectAbsence=_maximumIOUForObjectAbsence - In the implementation block
+(id)descriptorWithAnchorBoxes:(id)arg1 anchorBoxCount:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)reductionType;
-(void)setRescore:(BOOL)arg1 ;
-(MLCLossDescriptor *)confidenceLossDescriptor;
-(MLCLossDescriptor *)classesLossDescriptor;
-(NSData *)anchorBoxes;
-(unsigned long long)numberOfAnchorBoxes;
-(MLCLossDescriptor *)spatialPositionLossDescriptor;
-(MLCLossDescriptor *)spatialSizeLossDescriptor;
-(unsigned long long)anchorBoxCount;
-(BOOL)shouldRescore;
-(float)scaleSpatialPositionLoss;
-(float)scaleSpatialSizeLoss;
-(float)scaleNoObjectConfidenceLoss;
-(float)scaleObjectConfidenceLoss;
-(float)scaleClassLoss;
-(float)minimumIOUForObjectPresence;
-(float)maximumIOUForObjectAbsence;
-(void)setScaleNoObjectConfidenceLoss:(float)arg1 ;
-(void)setScaleObjectConfidenceLoss:(float)arg1 ;
-(id)initWithLossDescriptorWithSpatialPositionLossType:(int)arg1 spatialSizeLossType:(int)arg2 confidenceLossType:(int)arg3 classesLossType:(int)arg4 reductionType:(int)arg5 anchorBoxCount:(unsigned long long)arg6 anchorBoxes:(id)arg7 ;
-(void)setShouldRescore:(BOOL)arg1 ;
-(void)setScaleSpatialPositionLoss:(float)arg1 ;
-(void)setScaleSpatialSizeLoss:(float)arg1 ;
-(void)setScaleClassLoss:(float)arg1 ;
-(void)setMinimumIOUForObjectPresence:(float)arg1 ;
-(void)setMaximumIOUForObjectAbsence:(float)arg1 ;
@end

