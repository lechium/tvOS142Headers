/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet, PPBaseScoreInputSet, NSMutableArray;

@interface PPScoreDict : NSObject <MLFeatureProvider> {

	PPBaseScoreInputSet* _scoreInputSet;
	unique_ptr<std::__1::vector<float, std::__1::allocator<float> >, std::__1::default_delete<std::__1::vector<float, std::__1::allocator<float> > > >* _scalarValueStorage;
	unique_ptr<std::__1::vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float> > >, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float> > > > >, std::__1::default_delete<std::__1::vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float> > >, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float> > > > > > >* _arrayValueStorage;
	NSMutableArray* _objectStorage;

}

@property (nonatomic,readonly) NSSet * featureNames; 
-(id)description;
-(id)init;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)objectForIndex:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)initWithScalarValueCount:(unsigned long long)arg1 arrayValueCount:(unsigned long long)arg2 objectCount:(unsigned long long)arg3 ;
-(id)initWithScoreInputSet:(id)arg1 ;
-(id)initWithScalarValueCount:(unsigned long long)arg1 arrayValueCount:(unsigned long long)arg2 objectCount:(unsigned long long)arg3 scoreInputSet:(id)arg4 ;
-(float)scalarValueForIndex:(unsigned long long)arg1 ;
-(void)setScalarValue:(float)arg1 forIndex:(unsigned long long)arg2 ;
-(id)arrayValueForIndex:(unsigned long long)arg1 ;
-(shared_ptr<std::__1::vector<float, std::__1::allocator<float> > >*)arraySharedPtrForIndex:(unsigned long long)arg1 ;
-(void)setArrayValue:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(void)setArrayStorage:(vector<float, std::__1::allocator<float> >*)arg1 forIndex:(unsigned long long)arg2 ;
-(void)setArraySharedPtr:(shared_ptr<std::__1::vector<float, std::__1::allocator<float> > >*)arg1 forIndex:(unsigned long long)arg2 ;
-(unsigned long long)scalarValueCount;
-(unsigned long long)arrayValueCount;
-(unsigned long long)objectCount;
-(id)scalarValueDictionary;
-(id)arrayValueDictionary;
-(id)objectDictionary;
@end

