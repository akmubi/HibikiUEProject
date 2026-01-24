#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EHbkDecalPastingReflectDirection.h"
#include "HbkDecalPasting.h"
#include "HbkDecalPastingParam.h"
#include "HbkDecalPastingComponent.generated.h"

class UHbkHbkDecalPastingAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkDecalPastingComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkHbkDecalPastingAsset* DecalPastingAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkDecalPastingParam> Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> KeyConvertMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> TraceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceMarginLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkDecalPasting> DecalPastingArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TestDecalKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TestSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TestDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkDecalPastingReflectDirection TestReflectDirection;
    
public:
    UHbkDecalPastingComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TraceDecalPasting();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDecalEnableAll(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetDecalEnable(FName Key, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void ResetParameter();
    
    UFUNCTION(BlueprintCallable)
    void RemoveKeyConvert(FName Key);
    
    UFUNCTION(BlueprintCallable)
    void RegistKeyConvert(FName Key, FName ToName);
    
    UFUNCTION(BlueprintCallable)
    bool InitParameter(UHbkHbkDecalPastingAsset* Asset);
    
    UFUNCTION(BlueprintCallable)
    void DecalPasting(FName DecalKey, FName SocketName, FVector Direction, EHbkDecalPastingReflectDirection ReflectDirectionType);
    
    UFUNCTION(BlueprintCallable)
    void ClearKeyConvert();
    
};

