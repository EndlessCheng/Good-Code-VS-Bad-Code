ui calcmask()
{
	ui mask = 0U;
	int i;
	For(i, 4) mask |= (m_and[i] ^ m_or[i]) << ((3 - i) << 3);
	for (ui tmp = mask, mask = -1; tmp; tmp >>= 1) mask &= ~tmp; /// 这相当于内部定义了mask...
	return mask;
}


/// 正确的做法是遵循ANSI C标准...
