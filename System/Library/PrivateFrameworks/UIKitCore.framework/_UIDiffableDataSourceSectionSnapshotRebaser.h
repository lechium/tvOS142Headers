/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDiffableDataSourceSnapshot, _UIDiffableDataSourceDiffer, NSMapTable;

@interface _UIDiffableDataSourceSectionSnapshotRebaser : NSObject {

	NSDiffableDataSourceSnapshot* _initialSnapshot;
	NSDiffableDataSourceSnapshot* _finalSnapshot;
	_UIDiffableDataSourceDiffer* _dataSourceDiffer;
	NSMapTable* _initialSectionSnapshots;
	NSMapTable* _rebasedSectionSnapshots;

}

@property (nonatomic,readonly) NSMapTable * rebasedSectionSnapshots;              //@synthesize rebasedSectionSnapshots=_rebasedSectionSnapshots - In the implementation block
-(id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 initialSectionSnapshots:(id)arg3 dataSourceDiffer:(id)arg4 shouldPerformChildSnapshotMoves:(BOOL)arg5 ;
-(void)_rebaseForInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 initialSectionSnapshots:(id)arg3 dataSourceDiffer:(id)arg4 shouldPerformChildSnapshotMoves:(BOOL)arg5 ;
-(id)_transactionIncludingSectionDifferences:(BOOL)arg1 source:(long long)arg2 ;
-(id)_computeSectionTransactionsIncludingSectionDifferences:(BOOL)arg1 ;
-(id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 initialSectionSnapshots:(id)arg3 ;
-(id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 initialSectionSnapshots:(id)arg3 dataSourceDiffer:(id)arg4 ;
-(id)computeReorderingTransaction;
-(id)computeApplyTransactionIncludingSectionDifferences:(BOOL)arg1 ;
-(NSMapTable *)rebasedSectionSnapshots;
@end

