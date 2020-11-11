/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, DiagnosticReportGeneratorDelegate;
@class NSObject, DiagnosticCase;

@interface DiagnosticReportGenerator : NSObject {

	BOOL _reportGenerated;
	NSObject*<OS_dispatch_queue> _queue;
	double _timeoutSeconds;
	id<DiagnosticReportGeneratorDelegate> _delegate;
	DiagnosticCase* _diagCase;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) double timeoutSeconds;                                              //@synthesize timeoutSeconds=_timeoutSeconds - In the implementation block
@property (assign,nonatomic) BOOL reportGenerated;                                               //@synthesize reportGenerated=_reportGenerated - In the implementation block
@property (assign,nonatomic,__weak) id<DiagnosticReportGeneratorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) DiagnosticCase * diagCase;                                          //@synthesize diagCase=_diagCase - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                 //@synthesize completionHandler=_completionHandler - In the implementation block
-(id<DiagnosticReportGeneratorDelegate>)delegate;
-(void)setDelegate:(id<DiagnosticReportGeneratorDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithQueue:(id)arg1 ;
-(double)timeoutSeconds;
-(void)setTimeoutSeconds:(double)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setDefaults;
-(DiagnosticCase *)diagCase;
-(void)setDiagCase:(DiagnosticCase *)arg1 ;
-(BOOL)generateReportForCase:(id)arg1 reportName:(id)arg2 ;
-(BOOL)generateReportForCase:(id)arg1 reportName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)startReportGeneration;
-(BOOL)reportGenerated;
-(void)setReportGenerated:(BOOL)arg1 ;
@end

