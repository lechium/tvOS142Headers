/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSCollectionLayoutSize, _UICollectionPreferredSizingCustomizations;

@interface _UICollectionPreferredSize : NSObject {

	CGSize _originalSize;
	CGSize _fittingSize;
	CGSize _preferredSize;
	NSCollectionLayoutSize* _layoutSize;
	_UICollectionPreferredSizingCustomizations* _customizations;

}

@property (nonatomic,readonly) CGSize originalSize;                                                      //@synthesize originalSize=_originalSize - In the implementation block
@property (nonatomic,readonly) CGSize fittingSize;                                                       //@synthesize fittingSize=_fittingSize - In the implementation block
@property (nonatomic,readonly) NSCollectionLayoutSize * layoutSize;                                      //@synthesize layoutSize=_layoutSize - In the implementation block
@property (nonatomic,readonly) CGSize preferredSize;                                                     //@synthesize preferredSize=_preferredSize - In the implementation block
@property (nonatomic,readonly) _UICollectionPreferredSizingCustomizations * customizations;              //@synthesize customizations=_customizations - In the implementation block
-(id)description;
-(NSCollectionLayoutSize *)layoutSize;
-(CGSize)preferredSize;
-(CGSize)originalSize;
-(CGSize)fittingSize;
-(_UICollectionPreferredSizingCustomizations *)customizations;
-(id)initWithOriginalSize:(CGSize)arg1 fittingSize:(CGSize)arg2 layoutSize:(id)arg3 customizations:(id)arg4 ;
-(id)initWithOriginalSize:(CGSize)arg1 fittingSize:(CGSize)arg2 layoutSize:(id)arg3 ;
@end

