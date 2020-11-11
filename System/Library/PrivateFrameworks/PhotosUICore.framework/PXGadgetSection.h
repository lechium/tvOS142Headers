/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray, PXGadgetSectionHeader, PXGadgetSpec;

@interface PXGadgetSection : NSObject {

	long long _changeCount;
	NSString* _identifier;
	NSArray* _gadgets;
	PXGadgetSectionHeader* _sectionHeader;
	PXGadgetSpec* _gadgetSpec;

}

@property (nonatomic,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * gadgets;                                  //@synthesize gadgets=_gadgets - In the implementation block
@property (nonatomic,readonly) PXGadgetSectionHeader * sectionHeader;              //@synthesize sectionHeader=_sectionHeader - In the implementation block
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                            //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
-(id)description;
-(id)init;
-(NSString *)identifier;
-(PXGadgetSectionHeader *)sectionHeader;
-(NSArray *)gadgets;
-(PXGadgetSpec *)gadgetSpec;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(id)initWithIdentifier:(id)arg1 gadgets:(id)arg2 ;
@end

