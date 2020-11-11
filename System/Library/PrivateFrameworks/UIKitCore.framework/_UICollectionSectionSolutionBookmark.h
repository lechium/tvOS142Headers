/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UICollectionLayoutSectionSolver, _UIContentInsetsEnvironment;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSCollectionLayoutSection, _UICollectionPreferredSizes;

@interface _UICollectionSectionSolutionBookmark : NSObject {

	id<_UICollectionLayoutSectionSolver> _solution;
	NSCollectionLayoutSection* _section;
	CGRect _globalFrame;
	id<_UIContentInsetsEnvironment> _insetEnvironment;
	CGSize _contentSize;
	_UICollectionPreferredSizes* _preferredSizes;

}

@property (nonatomic,readonly) id<_UICollectionLayoutSectionSolver> solution;                 //@synthesize solution=_solution - In the implementation block
@property (nonatomic,readonly) CGRect globalFrame;                                            //@synthesize globalFrame=_globalFrame - In the implementation block
@property (nonatomic,readonly) id<_UIContentInsetsEnvironment> insetEnvironment;              //@synthesize insetEnvironment=_insetEnvironment - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                                            //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) CGRect orthogonalContentLayoutFrame; 
@property (nonatomic,readonly) CGSize orthogonalContentSize; 
@property (nonatomic,readonly) NSCollectionLayoutSection * section;                           //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) _UICollectionPreferredSizes * preferredSizes;                  //@synthesize preferredSizes=_preferredSizes - In the implementation block
@property (nonatomic,readonly) CGPoint contentInsetsOffset; 
-(id)description;
-(NSCollectionLayoutSection *)section;
-(CGSize)contentSize;
-(id<_UICollectionLayoutSectionSolver>)solution;
-(_UICollectionPreferredSizes *)preferredSizes;
-(CGRect)globalFrame;
-(CGRect)orthogonalContentLayoutFrame;
-(CGSize)orthogonalContentSize;
-(id)initWithSolution:(id)arg1 globalFrame:(CGRect)arg2 insetEnvironment:(id)arg3 contentSize:(CGSize)arg4 section:(id)arg5 preferredSizes:(id)arg6 ;
-(CGPoint)contentInsetsOffset;
-(id)copyWithGlobalFrame:(CGRect)arg1 ;
-(id<_UIContentInsetsEnvironment>)insetEnvironment;
@end

