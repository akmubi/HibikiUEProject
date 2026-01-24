#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkDebugVisibleDamageWidget.generated.h"

class AActor;
class AController;
class AHbkCharacter;
class AHbkPlayerController;
class UCanvasPanel;
class UDamageType;
class UHbkDamageComponent;
class UHbkDebugDrawLifeBarAndDamage;
class UHbkDebugVisibleDamagePartsWidget;
class UHbkToughComponent;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkDebugVisibleDamageWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkDebugVisibleDamagePartsWidget> DebugVisibleDamagePartsWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OffsetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkDebugDrawLifeBarAndDamage* OwnerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkToughComponent* ToughComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkPlayerController> PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* BaseOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* PartsCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* ToughPartsCanvas;
    
public:
    UHbkDebugVisibleDamageWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void Notify_ToughDamage(float PreToughValue, float DamagedToughValue);
    
    UFUNCTION(BlueprintCallable)
    void Notify_Damage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
};

