/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSDictionary, NSIndexSet, TSCH3DVector, TSCHChartInfo, TSCHChartLayout, TSCHChartModel, TSDLayoutGeometry;

@interface TSCHChartDrawableLayout : TSWPTextHostLayout {
    struct { 
        unsigned int chartLayoutState : 1; 
        unsigned int chartLayoutStructure : 1; 
    struct CGSize { 
        float width; 
        float height; 
    } mChartInvalidFlags;
    TSCHChartLayout *mChartLayout;
    BOOL mInResize;
    TSDLayoutGeometry *mLastPureGeometry;
    TSDLayoutGeometry *mLayoutGeometryWhileCallingSuperComputeLayoutGeometry;
    } mMinSizeCache;
    BOOL mSuppressChartLayoutInvalidation;
}

@property(readonly) TSCHChartInfo * chartInfo;
@property(readonly) TSCHChartLayout * chartLayout;
@property unsigned int dataSetIndex;
@property(readonly) BOOL is3DChart;
@property(copy) TSDLayoutGeometry * legendGeometry;
@property(copy) TSDLayoutGeometry * legendModelGeometry;
@property(readonly) TSCHChartModel * model;
@property(readonly) TSCHChartLayout * p_chartLayout;
@property(retain) TSCHChartLayout * p_chartLayoutNoCreate;
@property(copy) TSDLayoutGeometry * p_lastPureGeometry;
@property(readonly) NSIndexSet * pieWedgeExplosionSeriesIndices;
@property(copy) NSArray * pieWedgeExplosions;
@property(readonly) TSCH3DVector * rotation3D;
@property(copy) NSDictionary * seriesIndexedPieWedgeExplosions;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentFrameForProvidingGuidesInRoot;
- (void)beginDynamicOperation;
- (void)beginResize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForStandardKnobs;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsInfluencingExteriorWrap;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (BOOL)canRotateChildLayout:(id)arg1;
- (BOOL)changesShouldClearLayout:(id)arg1;
- (BOOL)changesShouldSetNeedsLayout:(id)arg1;
- (id)chartDrawableInfo;
- (id)chartInfo;
- (id)chartLayout;
- (id)computeInfoGeometryDuringResize;
- (id)computeLayoutGeometry;
- (unsigned int)dataSetIndex;
- (void)dealloc;
- (void)endDynamicOperation;
- (void)endResize;
- (id)initWithInfo:(id)arg1;
- (void)invalidate;
- (void)invalidateChartLayoutState;
- (void)invalidateChartLayoutStructure;
- (void)invalidateSize;
- (BOOL)is3DChart;
- (id)layoutGeometryFromInfo;
- (void)layoutSearchForSpellingErrorsWithHitBlock:(id)arg1 stop:(BOOL*)arg2;
- (void)layoutSearchForString:(id)arg1 options:(unsigned int)arg2 hitBlock:(id)arg3;
- (id)legendGeometry;
- (id)legendModelGeometry;
- (struct CGSize { float x1; float x2; })minimumSize;
- (id)model;
- (void)offsetGeometryBy:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_addMultiDataControlToBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)p_approximateMultiDataControlUnscaledHeight;
- (struct CGSize { float x1; float x2; })p_calcMinSize;
- (id)p_chartLayout2D;
- (id)p_chartLayout;
- (id)p_chartLayoutNoCreate;
- (void)p_clearChartLayout;
- (id)p_constrainAndResizePureGeometry:(id)arg1 withValidChartLayout:(id)arg2 toShadowGeometry:(id*)arg3 toInfoGeometry:(id*)arg4;
- (void)p_convertValidChartLayout:(id)arg1 andInfoGeometry:(id)arg2 toPureGeometry:(id*)arg3 toShadowGeometry:(id*)arg4;
- (void)p_forceValidateChartLayout;
- (BOOL)p_isPrintingInBackground;
- (id)p_lastPureGeometry;
- (void)p_postLayoutPropertyValueDidChangeNotification;
- (void)p_validateChartLayout;
- (id)pieWedgeExplosionSeriesIndices;
- (id)pieWedgeExplosions;
- (id)pieWedgeExplosionsForSeriesIndices:(id)arg1;
- (void)processChangedProperty:(int)arg1;
- (void)processChanges:(id)arg1;
- (id)propertiesThatInvalidateLayout;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSelection:(id)arg1;
- (id)renderersWithRep:(id)arg1;
- (Class)repClassOverride;
- (BOOL)resizeMayChangeAspectRatio;
- (id)rotation3D;
- (id)seriesIndexedPieWedgeExplosions;
- (void)setChartLayoutPropertyValue:(id)arg1 forKey:(id)arg2;
- (void)setDataSetIndex:(unsigned int)arg1;
- (void)setLegendGeometry:(id)arg1;
- (void)setLegendModelGeometry:(id)arg1;
- (void)setP_chartLayoutNoCreate:(id)arg1;
- (void)setP_lastPureGeometry:(id)arg1;
- (void)setPieWedgeExplosions:(id)arg1;
- (void)setRotation3D:(id)arg1;
- (void)setSeriesIndexedPieWedgeExplosions:(id)arg1;
- (BOOL)supportsParentRotation;
- (void)take3DDepth;
- (void)take3DRotationFromTracker:(id)arg1;
- (void)takeSizeFromTracker:(id)arg1;
- (void)validate;
- (int)wrapFitType;

@end
