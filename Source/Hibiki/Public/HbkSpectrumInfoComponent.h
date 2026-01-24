#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EHbkSpeanaType.h"
#include "HbkSpectrumInfoComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkSpectrumInfoComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkSpeanaType SpeanaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName materialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotUseMPCMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NumRepeatU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LineNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColumnNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> UsableSpectrumIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpectrumScale;
    
public:
    UHbkSpectrumInfoComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSpectrumMaterialWithNotUseMPC(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void UnregisterInRSS();
    
    UFUNCTION(BlueprintCallable)
    void RegisterInRSS();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpectrumInfo(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIntegralSpectrumInfo(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBeatSpectrumInfo(int32 Index) const;
    
};

