#ifndef JKR_MACRO_HPP
#define JKR_MACRO_HPP

// Tells doxygen to skip anything past this
#define DOXYGEN_SKIP_BEGIN /** @cond @{ */
// Tells doxygen to stop skipping anything past this
#define DOXYGEN_SKIP_END /** @} @endcond */
// A union that is ignored by Doxygen
#define DOXYGEN_UNION DOXYGEN_SKIP_BEGIN union { DOXYGEN_SKIP_END
// A struct that is ignored by Doxygen
#define DOXYGEN_STRUCT DOXYGEN_SKIP_BEGIN struct { DOXYGEN_SKIP_END
// A closing brace that is ignored by Doxygen
#define DOXYGEN_END DOXYGEN_SKIP_BEGIN }; DOXYGEN_SKIP_END

#define VECTOR_COMPONENT_X_BRIEF /** @brief The x-component of the vector and first element. Equivalent to @ref r. */
#define VECTOR_COMPONENT_Y_BRIEF /** @brief The y-component of the vector and second element. Equivalent to @ref g. */
#define VECTOR_COMPONENT_Z_BRIEF /** @brief The z-component of the vector and third element. Equivalent to @ref b. */
#define VECTOR_COMPONENT_W_BRIEF /** @brief The w-component of the vector and fourth element. Equivalent to @ref a. */

#define VECTOR_COMPONENT_R_BRIEF /** @brief The red channel and first element. Equivalent to @ref x. */
#define VECTOR_COMPONENT_G_BRIEF /** @brief The green channel and second element. Equivalent to @ref y. */
#define VECTOR_COMPONENT_B_BRIEF /** @brief The blue channel and third element. Equivalent to @ref z. */
#define VECTOR_COMPONENT_A_BRIEF /** @brief The alpha channel and third element. Equivalent to @ref w. */

#endif