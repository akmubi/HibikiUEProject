#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickCurveType_t.h"
#include "EHbkGimmick_LightEmissiveColorType_t.h"
#include "EHbkGimmick_LightEmissiveKindType_t.h"
#include "GimmickManagerCommonResLoadEndDelegateDelegate.h"
#include "HbkGimmickManagerCommonResourceInfo_t.h"
#include "HbkGimmickManagerHintSystemInfo_t.h"
#include "Templates/SubclassOf.h"
#include "TngGameSystem.h"
#include "HbkGimmickManager.generated.h"

class UCurveFloat;
class UHbkGimmickManagerCustomEventDataAsset;
class UHbkSpectraBattleController;
class UMeshComponent;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGimmickManager : public UTngGameSystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGimmickManagerCommonResLoadEndDelegate OnCommonResourceLoadEnd;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* hitInCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* hitIn2Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* pureFlatHitInCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* pulseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* hitOutCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* hitOutImmediateCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* hitOutSmoothCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* hitOutSmoothOneBeatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* hitOutStrongCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* buttonCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* flatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* pureFlatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* splinePointMoveCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* scaleDelayCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* pendulumCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickManagerCommonResourceInfo_t commonResInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHbkGimmickManagerCustomEventDataAsset> CustomEventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickManagerHintSystemInfo_t HintSystemInfo;
    
public:
    UHbkGimmickManager();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateSpectraRoomClearState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetEmissiveTextureParamForBP(UObject* WorldContextObject, UMeshComponent* pMeshComp, TEnumAsByte<EHbkGimmick_LightEmissiveColorType_t> Type, TEnumAsByte<EHbkGimmick_LightEmissiveKindType_t> kind, const float Intensity, const int32 Index);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetEmissiveIntensityParamForBP(UObject* WorldContextObject, UMeshComponent* pMeshComp, TEnumAsByte<EHbkGimmick_LightEmissiveColorType_t> Type, const float Intensity, const int32 Index);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReportSubMissionCompleted(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OrderSubMission(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsSubMissionInProgress(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsSubMisisonsCompleted(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsReportCompletedSubMission(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkSpectraBattleController* GetSpectraBattleController(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    float GetCurveValue(const float Time, EHbkGimmickCurveType_t curveType, bool CalcTimeRate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FailedSubMission(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DestroySpectraBattleController(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateSpectraBattleController(UObject* WorldContextObject, TSubclassOf<UHbkSpectraBattleController> SpectraBattleControllerClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddSubMisisonProgress(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ActivateSpectraCheckPoint(UObject* WorldContextObject);
    
};

